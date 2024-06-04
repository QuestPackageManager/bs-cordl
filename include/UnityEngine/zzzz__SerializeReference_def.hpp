#pragma once
// IWYU pragma private; include "UnityEngine/SerializeReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SerializeReference)
// Forward declare root types
namespace UnityEngine {
class SerializeReference;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SerializeReference);
// Type: UnityEngine::SerializeReference
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SerializeReference*
class CORDL_TYPE SerializeReference : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::SerializeReference* New_ctor();

  /// @brief Method .ctor, addr 0x3401be4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializeReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializeReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializeReference(SerializeReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializeReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializeReference(SerializeReference const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SerializeReference, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SerializeReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SerializeReference*, "UnityEngine", "SerializeReference");
