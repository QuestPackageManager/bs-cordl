#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/HttpTransferUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpTransferUpdate)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::HttpTransferUpdate);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.HttpTransferUpdate
class CORDL_TYPE HttpTransferUpdate : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsCompleted, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_IsCompleted, put = __cordl_internal_set_IsCompleted)) bool IsCompleted;

  /// @brief Field Payload, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Payload, put = __cordl_internal_set_Payload)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Payload;

  /// @brief Field ID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) uint64_t _cordl_ID;

  static inline ::Oculus::Platform::Models::HttpTransferUpdate* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_IsCompleted() const;

  constexpr bool& __cordl_internal_get_IsCompleted();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Payload() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Payload();

  constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

  constexpr uint64_t& __cordl_internal_get__cordl_ID();

  constexpr void __cordl_internal_set_IsCompleted(bool value);

  constexpr void __cordl_internal_set_Payload(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__cordl_ID(uint64_t value);

  /// @brief Method .ctor, addr 0x3f958f8, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpTransferUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpTransferUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpTransferUpdate(HttpTransferUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpTransferUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpTransferUpdate(HttpTransferUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15522 };

  /// @brief Field ID, offset: 0x10, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field Payload, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Payload;

  /// @brief Field IsCompleted, offset: 0x20, size: 0x1, def value: None
  bool ___IsCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::HttpTransferUpdate, ____cordl_ID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::HttpTransferUpdate, ___Payload) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::HttpTransferUpdate, ___IsCompleted) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::HttpTransferUpdate, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::HttpTransferUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::HttpTransferUpdate*, "Oculus.Platform.Models", "HttpTransferUpdate");
