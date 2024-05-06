#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationOptions)
// Forward declare root types
namespace Oculus::Platform {
class ApplicationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::ApplicationOptions);
// Type: Oculus.Platform::ApplicationOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::ApplicationOptions*
class CORDL_TYPE ApplicationOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) void* Handle;

  /// @brief Method Finalize, addr 0x2aa4f78, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::ApplicationOptions* New_ctor();

  /// @brief Method SetDeeplinkMessage, addr 0x2aa4a14, size 0x68, virtual false, abstract: false, final false
  inline void SetDeeplinkMessage(::StringW value);

  /// @brief Method SetDestinationApiName, addr 0x2aa4b1c, size 0x68, virtual false, abstract: false, final false
  inline void SetDestinationApiName(::StringW value);

  /// @brief Method SetLobbySessionId, addr 0x2aa4c24, size 0x68, virtual false, abstract: false, final false
  inline void SetLobbySessionId(::StringW value);

  /// @brief Method SetMatchSessionId, addr 0x2aa4d2c, size 0x68, virtual false, abstract: false, final false
  inline void SetMatchSessionId(::StringW value);

  /// @brief Method SetRoomId, addr 0x2aa4e34, size 0x68, virtual false, abstract: false, final false
  inline void SetRoomId(uint64_t value);

  constexpr void* const& __cordl_internal_get_Handle() const;

  constexpr void*& __cordl_internal_get_Handle();

  constexpr void __cordl_internal_set_Handle(void* value);

  /// @brief Method .ctor, addr 0x2aa4948, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Explicit, addr 0x2aa4f20, size 0x58, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::Oculus::Platform::ApplicationOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApplicationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationOptions(ApplicationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationOptions(ApplicationOptions const&) = delete;

  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ApplicationOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::ApplicationOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::ApplicationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ApplicationOptions*, "Oculus.Platform", "ApplicationOptions");
