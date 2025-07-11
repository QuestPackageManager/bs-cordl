#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Destination.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Destination)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Destination;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Destination);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.Destination
class CORDL_TYPE Destination : public ::System::Object {
public:
  // Declarations
  /// @brief Field ApiName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ApiName, put = __cordl_internal_set_ApiName)) ::StringW ApiName;

  /// @brief Field DeeplinkMessage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_DeeplinkMessage, put = __cordl_internal_set_DeeplinkMessage)) ::StringW DeeplinkMessage;

  /// @brief Field DisplayName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_DisplayName, put = __cordl_internal_set_DisplayName)) ::StringW DisplayName;

  static inline ::Oculus::Platform::Models::Destination* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_ApiName() const;

  constexpr ::StringW& __cordl_internal_get_ApiName();

  constexpr ::StringW const& __cordl_internal_get_DeeplinkMessage() const;

  constexpr ::StringW& __cordl_internal_get_DeeplinkMessage();

  constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

  constexpr ::StringW& __cordl_internal_get_DisplayName();

  constexpr void __cordl_internal_set_ApiName(::StringW value);

  constexpr void __cordl_internal_set_DeeplinkMessage(::StringW value);

  constexpr void __cordl_internal_set_DisplayName(::StringW value);

  /// @brief Method .ctor, addr 0x3f8f474, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Destination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Destination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Destination(Destination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Destination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Destination(Destination const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15522 };

  /// @brief Field ApiName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___ApiName;

  /// @brief Field DeeplinkMessage, offset: 0x18, size: 0x8, def value: None
  ::StringW ___DeeplinkMessage;

  /// @brief Field DisplayName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___DisplayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::Destination, ___ApiName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Destination, ___DeeplinkMessage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Destination, ___DisplayName) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Destination, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Destination);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Destination*, "Oculus.Platform.Models", "Destination");
