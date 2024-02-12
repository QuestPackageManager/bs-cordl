#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomOptions)
namespace Oculus::Platform {
struct TimeWindow;
}
namespace Oculus::Platform {
struct UserOrdering;
}
// Forward declare root types
namespace Oculus::Platform {
class RoomOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::RoomOptions);
// Type: Oculus.Platform::RoomOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13313))
// CS Name: ::Oculus.Platform::RoomOptions*
class CORDL_TYPE RoomOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) void* Handle;

  constexpr void*& __cordl_internal_get_Handle();

  constexpr void* const& __cordl_internal_get_Handle() const;

  constexpr void __cordl_internal_set_Handle(void* value);

  static inline ::Oculus::Platform::RoomOptions* New_ctor();

  /// @brief Method .ctor, addr 0x2733a00, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetDataStore, addr 0x2733a68, size 0x74, virtual false, abstract: false, final false
  inline void SetDataStore(::StringW key, ::StringW value);

  /// @brief Method ClearDataStore, addr 0x2733adc, size 0x5c, virtual false, abstract: false, final false
  inline void ClearDataStore();

  /// @brief Method SetExcludeRecentlyMet, addr 0x2733b38, size 0x6c, virtual false, abstract: false, final false
  inline void SetExcludeRecentlyMet(bool value);

  /// @brief Method SetMaxUserResults, addr 0x2733ba4, size 0x6c, virtual false, abstract: false, final false
  inline void SetMaxUserResults(uint32_t value);

  /// @brief Method SetOrdering, addr 0x2733c10, size 0x6c, virtual false, abstract: false, final false
  inline void SetOrdering(::Oculus::Platform::UserOrdering value);

  /// @brief Method SetRecentlyMetTimeWindow, addr 0x2733c7c, size 0x6c, virtual false, abstract: false, final false
  inline void SetRecentlyMetTimeWindow(::Oculus::Platform::TimeWindow value);

  /// @brief Method SetRoomId, addr 0x2733ce8, size 0x6c, virtual false, abstract: false, final false
  inline void SetRoomId(uint64_t value);

  /// @brief Method SetTurnOffUpdates, addr 0x2733d54, size 0x6c, virtual false, abstract: false, final false
  inline void SetTurnOffUpdates(bool value);

  /// @brief Method op_Explicit, addr 0x2733dc0, size 0x58, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::Oculus::Platform::RoomOptions* options);

  /// @brief Method Finalize, addr 0x2733e18, size 0xd8, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "RoomOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomOptions(RoomOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomOptions(RoomOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RoomOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::RoomOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::RoomOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomOptions*, "Oculus.Platform", "RoomOptions");
