#pragma once
// IWYU pragma private; include "GlobalNamespace/SignalSenderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(SignalSenderAttribute)
// Forward declare root types
namespace GlobalNamespace {
class SignalSenderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalSenderAttribute);
// Type: ::SignalSenderAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SignalSenderAttribute*
class CORDL_TYPE SignalSenderAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::SignalSenderAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x24d7b58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalSenderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalSenderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalSenderAttribute(SignalSenderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalSenderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalSenderAttribute(SignalSenderAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalSenderAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalSenderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalSenderAttribute*, "", "SignalSenderAttribute");
