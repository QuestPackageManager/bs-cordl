#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEquivableWrapperClass_1)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::IEquivableWrapperClass_1);
// Type: HoudiniEngineUnity::IEquivableWrapperClass`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9884))
// CS Name: ::HoudiniEngineUnity::IEquivableWrapperClass`1<T>*
class CORDL_TYPE IEquivableWrapperClass_1 {
public:
  // Declarations
  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<T>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<T>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<T>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<T>* i___HoudiniEngineUnity__IEquivable_1_T_() noexcept;

  /// @brief Method IsNull, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsNull();

  // Ctor Parameters [CppParam { name: "", ty: "IEquivableWrapperClass_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEquivableWrapperClass_1(IEquivableWrapperClass_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEquivableWrapperClass_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEquivableWrapperClass_1(IEquivableWrapperClass_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::IEquivableWrapperClass_1, "HoudiniEngineUnity", "IEquivableWrapperClass`1");
