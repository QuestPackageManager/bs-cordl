#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRResult)
namespace GlobalNamespace {
template <typename TStatus> struct OVRResult_1;
}
namespace GlobalNamespace {
template <typename TValue, typename TStatus> struct OVRResult_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRResult;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRResult);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRResult
class CORDL_TYPE OVRResult : public ::System::Object {
public:
  // Declarations
  /// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStatus> static inline ::GlobalNamespace::OVRResult_1<TStatus> From(TStatus status);

  /// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult, typename TStatus> static inline ::GlobalNamespace::OVRResult_2<TResult, TStatus> From(TResult result, TStatus status);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRResult(OVRResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRResult(OVRResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRResult);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResult*, "", "OVRResult");
