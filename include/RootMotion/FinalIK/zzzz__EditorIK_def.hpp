#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EditorIK)
namespace RootMotion::FinalIK {
class IK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class EditorIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::EditorIK);
// Type: RootMotion.FinalIK::EditorIK
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12535))
// CS Name: ::RootMotion.FinalIK::EditorIK*
class CORDL_TYPE EditorIK : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::IK> ik;

  constexpr ::UnityW<::RootMotion::FinalIK::IK>& __cordl_internal_get_ik();

  constexpr ::UnityW<::RootMotion::FinalIK::IK> const& __cordl_internal_get_ik() const;

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::IK> value);

  /// @brief Method Start, addr 0x132ce00, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x132ce8c, size 0xc0, virtual false, abstract: false, final false
  inline void Update();

  static inline ::RootMotion::FinalIK::EditorIK* New_ctor();

  /// @brief Method .ctor, addr 0x132cf4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EditorIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditorIK(EditorIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditorIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditorIK(EditorIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditorIK();

public:
  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::IK> ___ik;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::EditorIK, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::EditorIK, ___ik) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::EditorIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::EditorIK*, "RootMotion.FinalIK", "EditorIK");
