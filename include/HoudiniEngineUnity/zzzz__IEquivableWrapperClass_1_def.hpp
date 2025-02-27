#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/IEquivableWrapperClass_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
CORDL_MODULE_EXPORT(IEquivableWrapperClass_1)
// Forward declare root types
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::IEquivableWrapperClass_1);
// Dependencies HoudiniEngineUnity.IEquivable`1<T>
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: HoudiniEngineUnity.IEquivableWrapperClass`1<T>
class CORDL_TYPE IEquivableWrapperClass_1 {
public:
  // Declarations
  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<T>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<T>*() noexcept;

  /// @brief Method IsNull, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsNull();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<T>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<T>* i___HoudiniEngineUnity__IEquivable_1_T_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IEquivableWrapperClass_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEquivableWrapperClass_1(IEquivableWrapperClass_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::IEquivableWrapperClass_1, "HoudiniEngineUnity", "IEquivableWrapperClass`1");
