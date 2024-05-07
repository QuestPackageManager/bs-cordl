#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IHasDefault.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHasDefault)
// Forward declare root types
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::IHasDefault);
// Type: UnityEngine.ProBuilder::IHasDefault
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::IHasDefault*
class CORDL_TYPE IHasDefault {
public:
  // Declarations
  /// @brief Method SetDefaultValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetDefaultValues();

  // Ctor Parameters [CppParam { name: "", ty: "IHasDefault", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHasDefault(IHasDefault&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHasDefault", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHasDefault(IHasDefault const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::IHasDefault);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IHasDefault*, "UnityEngine.ProBuilder", "IHasDefault");
