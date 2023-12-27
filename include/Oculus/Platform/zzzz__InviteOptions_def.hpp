#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InviteOptions)
// Forward declare root types
namespace Oculus::Platform {
class InviteOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::InviteOptions);
// Type: Oculus.Platform::InviteOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13248))
// CS Name: ::Oculus.Platform::InviteOptions*
class CORDL_TYPE InviteOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __get_Handle, put = __set_Handle)) void* Handle;

  constexpr void*& __get_Handle();

  constexpr void* const& __get_Handle() const;

  constexpr void __set_Handle(void* value);

  static inline ::Oculus::Platform::InviteOptions* New_ctor();

  /// @brief Method .ctor addr 0x26caa0c size 0x64 virtual false final false
  inline void _ctor();

  /// @brief Method AddSuggestedUser addr 0x26caa70 size 0x68 virtual false final false
  inline void AddSuggestedUser(uint64_t userID);

  /// @brief Method ClearSuggestedUsers addr 0x26ec9a0 size 0x58 virtual false final false
  inline void ClearSuggestedUsers();

  /// @brief Method op_Explicit addr 0x26ec9f8 size 0x58 virtual false final false
  static inline void* op_Explicit_void_(::Oculus::Platform::InviteOptions* options);

  /// @brief Method Finalize addr 0x26eca50 size 0xd4 virtual true final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "InviteOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InviteOptions(InviteOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InviteOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InviteOptions(InviteOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InviteOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::InviteOptions, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::InviteOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::InviteOptions*, "Oculus.Platform", "InviteOptions");
