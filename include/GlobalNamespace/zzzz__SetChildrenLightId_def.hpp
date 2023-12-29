#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetChildrenLightId)
// Forward declare root types
namespace GlobalNamespace {
class SetChildrenLightId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetChildrenLightId);
// Type: ::SetChildrenLightId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14773))
// CS Name: ::SetChildrenLightId*
class CORDL_TYPE SetChildrenLightId : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _ID, offset 0x18, size 0x4
  __declspec(property(get = __get__ID, put = __set__ID)) int32_t _ID;

  constexpr int32_t& __get__ID();

  constexpr int32_t const& __get__ID() const;

  constexpr void __set__ID(int32_t value);

  static inline ::GlobalNamespace::SetChildrenLightId* New_ctor();

  /// @brief Method .ctor addr 0x1fbd438 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SetChildrenLightId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetChildrenLightId(SetChildrenLightId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetChildrenLightId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetChildrenLightId(SetChildrenLightId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetChildrenLightId();

public:
  /// @brief Field _ID, offset: 0x18, size: 0x4, def value: None
  int32_t ____ID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetChildrenLightId, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetChildrenLightId, ____ID) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetChildrenLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetChildrenLightId*, "", "SetChildrenLightId");
