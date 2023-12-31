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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13229))
// CS Name: ::Oculus.Platform::ApplicationOptions*
class CORDL_TYPE ApplicationOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __get_Handle, put = __set_Handle)) void* Handle;

  constexpr void*& __get_Handle();

  constexpr void* const& __get_Handle() const;

  constexpr void __set_Handle(void* value);

  static inline ::Oculus::Platform::ApplicationOptions* New_ctor();

  /// @brief Method .ctor, addr 0x26ce794, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetDeeplinkMessage, addr 0x26ce860, size 0x68, virtual false, abstract: false, final false
  inline void SetDeeplinkMessage(::StringW value);

  /// @brief Method SetDestinationApiName, addr 0x26ce968, size 0x68, virtual false, abstract: false, final false
  inline void SetDestinationApiName(::StringW value);

  /// @brief Method SetLobbySessionId, addr 0x26cea70, size 0x68, virtual false, abstract: false, final false
  inline void SetLobbySessionId(::StringW value);

  /// @brief Method SetMatchSessionId, addr 0x26ceb78, size 0x68, virtual false, abstract: false, final false
  inline void SetMatchSessionId(::StringW value);

  /// @brief Method SetRoomId, addr 0x26cec80, size 0x68, virtual false, abstract: false, final false
  inline void SetRoomId(uint64_t value);

  /// @brief Method op_Explicit, addr 0x26ced6c, size 0x58, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::Oculus::Platform::ApplicationOptions* options);

  /// @brief Method Finalize, addr 0x26cedc4, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationOptions(ApplicationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationOptions(ApplicationOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationOptions();

public:
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
