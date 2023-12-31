#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchUnblockFlowResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchUnblockFlowResult);
// Type: Oculus.Platform.Models::LaunchUnblockFlowResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13446))
// CS Name: ::Oculus.Platform.Models::LaunchUnblockFlowResult*
class CORDL_TYPE LaunchUnblockFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DidCancel, offset 0x10, size 0x1
  __declspec(property(get = __get_DidCancel, put = __set_DidCancel)) bool DidCancel;

  /// @brief Field DidUnblock, offset 0x11, size 0x1
  __declspec(property(get = __get_DidUnblock, put = __set_DidUnblock)) bool DidUnblock;

  constexpr bool& __get_DidCancel();

  constexpr bool const& __get_DidCancel() const;

  constexpr void __set_DidCancel(bool value);

  constexpr bool& __get_DidUnblock();

  constexpr bool const& __get_DidUnblock() const;

  constexpr void __set_DidUnblock(bool value);

  static inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x27067a0, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LaunchUnblockFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchUnblockFlowResult(LaunchUnblockFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchUnblockFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchUnblockFlowResult(LaunchUnblockFlowResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchUnblockFlowResult();

public:
  /// @brief Field DidCancel, offset: 0x10, size: 0x1, def value: None
  bool ___DidCancel;

  /// @brief Field DidUnblock, offset: 0x11, size: 0x1, def value: None
  bool ___DidUnblock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchUnblockFlowResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchUnblockFlowResult, ___DidCancel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchUnblockFlowResult, ___DidUnblock) == 0x11, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchUnblockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchUnblockFlowResult*, "Oculus.Platform.Models", "LaunchUnblockFlowResult");
