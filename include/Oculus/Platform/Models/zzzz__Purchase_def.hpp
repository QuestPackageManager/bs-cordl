#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Purchase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Purchase)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Purchase;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Purchase);
// Dependencies System.DateTime, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.Purchase
class CORDL_TYPE Purchase : public ::System::Object {
public:
  // Declarations
  /// @brief Field DeveloperPayload, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DeveloperPayload, put = __cordl_internal_set_DeveloperPayload)) ::StringW DeveloperPayload;

  /// @brief Field ExpirationTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ExpirationTime, put = __cordl_internal_set_ExpirationTime)) ::System::DateTime ExpirationTime;

  /// @brief Field GrantTime, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_GrantTime, put = __cordl_internal_set_GrantTime)) ::System::DateTime GrantTime;

  /// @brief Field ReportingId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ReportingId, put = __cordl_internal_set_ReportingId)) ::StringW ReportingId;

  /// @brief Field Sku, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Sku, put = __cordl_internal_set_Sku)) ::StringW Sku;

  /// @brief Field ID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) ::StringW _cordl_ID;

  static inline ::Oculus::Platform::Models::Purchase* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_DeveloperPayload() const;

  constexpr ::StringW& __cordl_internal_get_DeveloperPayload();

  constexpr ::System::DateTime const& __cordl_internal_get_ExpirationTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_ExpirationTime();

  constexpr ::System::DateTime const& __cordl_internal_get_GrantTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_GrantTime();

  constexpr ::StringW const& __cordl_internal_get_ReportingId() const;

  constexpr ::StringW& __cordl_internal_get_ReportingId();

  constexpr ::StringW const& __cordl_internal_get_Sku() const;

  constexpr ::StringW& __cordl_internal_get_Sku();

  constexpr ::StringW const& __cordl_internal_get__cordl_ID() const;

  constexpr ::StringW& __cordl_internal_get__cordl_ID();

  constexpr void __cordl_internal_set_DeveloperPayload(::StringW value);

  constexpr void __cordl_internal_set_ExpirationTime(::System::DateTime value);

  constexpr void __cordl_internal_set_GrantTime(::System::DateTime value);

  constexpr void __cordl_internal_set_ReportingId(::StringW value);

  constexpr void __cordl_internal_set_Sku(::StringW value);

  constexpr void __cordl_internal_set__cordl_ID(::StringW value);

  /// @brief Method .ctor, addr 0x3f93568, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Purchase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Purchase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Purchase(Purchase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Purchase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Purchase(Purchase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15566 };

  /// @brief Field DeveloperPayload, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DeveloperPayload;

  /// @brief Field ExpirationTime, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___ExpirationTime;

  /// @brief Field GrantTime, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___GrantTime;

  /// @brief Field ID, offset: 0x28, size: 0x8, def value: None
  ::StringW ____cordl_ID;

  /// @brief Field ReportingId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___ReportingId;

  /// @brief Field Sku, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Sku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::Purchase, ___DeveloperPayload) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Purchase, ___ExpirationTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Purchase, ___GrantTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Purchase, ____cordl_ID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Purchase, ___ReportingId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Purchase, ___Sku) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Purchase, 0x40>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Purchase);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Purchase*, "Oculus.Platform.Models", "Purchase");
