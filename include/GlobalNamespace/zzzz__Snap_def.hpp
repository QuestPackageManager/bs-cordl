#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Snap)
// Forward declare root types
namespace GlobalNamespace {
class Snap;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Snap);
// Type: ::Snap
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13900))
// CS Name: ::Snap*
class CORDL_TYPE Snap : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field snap, offset 0x18, size 0xc
  __declspec(property(get = __get_snap, put = __set_snap))::UnityEngine::Vector3 snap;

  /// @brief Field offset, offset 0x24, size 0xc
  __declspec(property(get = __get_offset, put = __set_offset))::UnityEngine::Vector3 offset;

  constexpr ::UnityEngine::Vector3& __get_snap();

  constexpr ::UnityEngine::Vector3 const& __get_snap() const;

  constexpr void __set_snap(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_offset();

  constexpr ::UnityEngine::Vector3 const& __get_offset() const;

  constexpr void __set_offset(::UnityEngine::Vector3 value);

  /// @brief Method SnapPosition addr 0x1f99f24 size 0x27c virtual false final false
  inline void SnapPosition();

  static inline ::GlobalNamespace::Snap* New_ctor();

  /// @brief Method .ctor addr 0x1f9a1a0 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Snap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Snap(Snap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Snap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Snap(Snap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Snap();

public:
  /// @brief Field snap, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___snap;

  /// @brief Field offset, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Snap, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Snap, ___snap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Snap, ___offset) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Snap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Snap*, "", "Snap");
