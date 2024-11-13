#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/IEquivable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEquivable_1)
// Forward declare root types
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::IEquivable_1);
// Type: HoudiniEngineUnity::IEquivable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HoudiniEngineUnity::IEquivable`1<T>*
class CORDL_TYPE IEquivable_1 {
public:
  // Declarations
  /// @brief Method IsEquivalentTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsEquivalentTo(T other);

  // Ctor Parameters [CppParam { name: "", ty: "IEquivable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEquivable_1(IEquivable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEquivable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEquivable_1(IEquivable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11832 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::IEquivable_1, "HoudiniEngineUnity", "IEquivable`1");
