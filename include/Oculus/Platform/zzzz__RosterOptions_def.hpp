#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RosterOptions)
// Forward declare root types
namespace Oculus::Platform {
class RosterOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::RosterOptions);
// Type: Oculus.Platform::RosterOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13422))
// CS Name: ::Oculus.Platform::RosterOptions*
class CORDL_TYPE RosterOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __get_Handle, put = __set_Handle)) void* Handle;

  constexpr void*& __get_Handle();

  constexpr void* const& __get_Handle() const;

  constexpr void __set_Handle(void* value);

  static inline ::Oculus::Platform::RosterOptions* New_ctor();

  /// @brief Method .ctor addr 0x25ae668 size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method AddSuggestedUser addr 0x25ae6d0 size 0x6c virtual false final false
  inline void AddSuggestedUser(uint64_t userID);

  /// @brief Method ClearSuggestedUsers addr 0x25ae73c size 0x5c virtual false final false
  inline void ClearSuggestedUsers();

  /// @brief Method op_Explicit addr 0x25a90e0 size 0x58 virtual false final false
  static inline void* op_Explicit_void_(::Oculus::Platform::RosterOptions* options);

  /// @brief Method Finalize addr 0x25ae798 size 0xd8 virtual true final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "RosterOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RosterOptions(RosterOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RosterOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RosterOptions(RosterOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RosterOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RosterOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::RosterOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::RosterOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RosterOptions*, "Oculus.Platform", "RosterOptions");
