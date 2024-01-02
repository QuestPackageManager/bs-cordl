#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchBlockFlowResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchBlockFlowResult);
// Type: Oculus.Platform.Models::LaunchBlockFlowResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13441))
// CS Name: ::Oculus.Platform.Models::LaunchBlockFlowResult*
class CORDL_TYPE LaunchBlockFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DidBlock, offset 0x10, size 0x1
  __declspec(property(get = __get_DidBlock, put = __set_DidBlock)) bool DidBlock;

  /// @brief Field DidCancel, offset 0x11, size 0x1
  __declspec(property(get = __get_DidCancel, put = __set_DidCancel)) bool DidCancel;

  constexpr bool& __get_DidBlock();

  constexpr bool const& __get_DidBlock() const;

  constexpr void __set_DidBlock(bool value);

  constexpr bool& __get_DidCancel();

  constexpr bool const& __get_DidCancel() const;

  constexpr void __set_DidCancel(bool value);

  static inline ::Oculus::Platform::Models::LaunchBlockFlowResult* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2706404, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LaunchBlockFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchBlockFlowResult(LaunchBlockFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchBlockFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchBlockFlowResult(LaunchBlockFlowResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchBlockFlowResult();

public:
  /// @brief Field DidBlock, offset: 0x10, size: 0x1, def value: None
  bool ___DidBlock;

  /// @brief Field DidCancel, offset: 0x11, size: 0x1, def value: None
  bool ___DidCancel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchBlockFlowResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchBlockFlowResult, ___DidBlock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchBlockFlowResult, ___DidCancel) == 0x11, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchBlockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchBlockFlowResult*, "Oculus.Platform.Models", "LaunchBlockFlowResult");
