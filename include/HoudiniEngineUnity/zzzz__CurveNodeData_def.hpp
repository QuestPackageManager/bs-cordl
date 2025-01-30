#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/CurveNodeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CurveNodeData)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class CurveNodeData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::CurveNodeData);
// Dependencies HoudiniEngineUnity.IEquivable`1<T>, System.Object, UnityEngine.Vector3
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.CurveNodeData
class CORDL_TYPE CurveNodeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field position, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) ::UnityEngine::Vector3 rotation;

  /// @brief Field scale, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) ::UnityEngine::Vector3 scale;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>*() noexcept;

  /// @brief Method GetRotation, addr 0x3a0b834, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotation();

  /// @brief Method IsEquivalentTo, addr 0x3a0b858, size 0x1ac, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::CurveNodeData* other);

  static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor();

  static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor(::HoudiniEngineUnity::CurveNodeData* other);

  static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor(::UnityEngine::Vector3 position);

  static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  static inline ::HoudiniEngineUnity::CurveNodeData* New_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_position();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_scale();

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_scale(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3a0b368, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3a0b744, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::CurveNodeData* other);

  /// @brief Method .ctor, addr 0x3a0b410, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position);

  /// @brief Method .ctor, addr 0x3a0b4e0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method .ctor, addr 0x3a0b60c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::CurveNodeData*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__CurveNodeData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurveNodeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurveNodeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurveNodeData(CurveNodeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurveNodeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurveNodeData(CurveNodeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11604 };

  /// @brief Field position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___position;

  /// @brief Field rotation, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rotation;

  /// @brief Field scale, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::CurveNodeData, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::CurveNodeData, ___rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::CurveNodeData, ___scale) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::CurveNodeData, 0x38>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::CurveNodeData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::CurveNodeData*, "HoudiniEngineUnity", "CurveNodeData");
