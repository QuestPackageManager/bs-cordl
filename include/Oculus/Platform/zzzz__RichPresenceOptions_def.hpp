#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RichPresenceOptions)
namespace Oculus::Platform {
struct RichPresenceExtraContext;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Oculus::Platform {
class RichPresenceOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::RichPresenceOptions);
// Type: Oculus.Platform::RichPresenceOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13309))
// CS Name: ::Oculus.Platform::RichPresenceOptions*
class CORDL_TYPE RichPresenceOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) void* Handle;

  constexpr void*& __cordl_internal_get_Handle();

  constexpr void* const& __cordl_internal_get_Handle() const;

  constexpr void __cordl_internal_set_Handle(void* value);

  static inline ::Oculus::Platform::RichPresenceOptions* New_ctor();

  /// @brief Method .ctor, addr 0x2733488, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetApiName, addr 0x27334f0, size 0x6c, virtual false, abstract: false, final false
  inline void SetApiName(::StringW value);

  /// @brief Method SetCurrentCapacity, addr 0x273355c, size 0x6c, virtual false, abstract: false, final false
  inline void SetCurrentCapacity(uint32_t value);

  /// @brief Method SetDeeplinkMessageOverride, addr 0x27335c8, size 0x6c, virtual false, abstract: false, final false
  inline void SetDeeplinkMessageOverride(::StringW value);

  /// @brief Method SetEndTime, addr 0x2733634, size 0x6c, virtual false, abstract: false, final false
  inline void SetEndTime(::System::DateTime value);

  /// @brief Method SetExtraContext, addr 0x27336a0, size 0x6c, virtual false, abstract: false, final false
  inline void SetExtraContext(::Oculus::Platform::RichPresenceExtraContext value);

  /// @brief Method SetInstanceId, addr 0x273370c, size 0x6c, virtual false, abstract: false, final false
  inline void SetInstanceId(::StringW value);

  /// @brief Method SetIsIdle, addr 0x2733778, size 0x6c, virtual false, abstract: false, final false
  inline void SetIsIdle(bool value);

  /// @brief Method SetIsJoinable, addr 0x27337e4, size 0x6c, virtual false, abstract: false, final false
  inline void SetIsJoinable(bool value);

  /// @brief Method SetMaxCapacity, addr 0x2733850, size 0x6c, virtual false, abstract: false, final false
  inline void SetMaxCapacity(uint32_t value);

  /// @brief Method SetStartTime, addr 0x27338bc, size 0x6c, virtual false, abstract: false, final false
  inline void SetStartTime(::System::DateTime value);

  /// @brief Method op_Explicit, addr 0x273118c, size 0x58, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::Oculus::Platform::RichPresenceOptions* options);

  /// @brief Method Finalize, addr 0x2733928, size 0xd8, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "RichPresenceOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichPresenceOptions(RichPresenceOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichPresenceOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichPresenceOptions(RichPresenceOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresenceOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RichPresenceOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::RichPresenceOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::RichPresenceOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresenceOptions*, "Oculus.Platform", "RichPresenceOptions");
