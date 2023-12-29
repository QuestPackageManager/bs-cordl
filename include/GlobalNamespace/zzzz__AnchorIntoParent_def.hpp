#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(AnchorIntoParent)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AnchorIntoParent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnchorIntoParent);
// Type: ::AnchorIntoParent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5446))
// CS Name: ::AnchorIntoParent*
class CORDL_TYPE AnchorIntoParent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _parentTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__parentTransform, put = __set__parentTransform))::UnityEngine::Transform* _parentTransform;

  /// @brief Field _positionOffset, offset 0x20, size 0xc
  __declspec(property(get = __get__positionOffset, put = __set__positionOffset))::UnityEngine::Vector3 _positionOffset;

  constexpr ::UnityEngine::Transform*& __get__parentTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__parentTransform() const;

  constexpr void __set__parentTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__positionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__positionOffset() const;

  constexpr void __set__positionOffset(::UnityEngine::Vector3 value);

  /// @brief Method Start addr 0x2127ce8 size 0x100 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::AnchorIntoParent* New_ctor();

  /// @brief Method .ctor addr 0x2127de8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnchorIntoParent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnchorIntoParent(AnchorIntoParent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnchorIntoParent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnchorIntoParent(AnchorIntoParent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnchorIntoParent();

public:
  /// @brief Field _parentTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____parentTransform;

  /// @brief Field _positionOffset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnchorIntoParent, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorIntoParent, ____parentTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorIntoParent, ____positionOffset) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnchorIntoParent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnchorIntoParent*, "", "AnchorIntoParent");
