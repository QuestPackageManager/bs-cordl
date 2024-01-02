#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserReportID)
// Forward declare root types
namespace Oculus::Platform::Models {
class UserReportID;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserReportID);
// Type: Oculus.Platform.Models::UserReportID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13491))
// CS Name: ::Oculus.Platform.Models::UserReportID*
class CORDL_TYPE UserReportID : public ::System::Object {
public:
  // Declarations
  /// @brief Field DidCancel, offset 0x10, size 0x1
  __declspec(property(get = __get_DidCancel, put = __set_DidCancel)) bool DidCancel;

  /// @brief Field ID, offset 0x18, size 0x8
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) uint64_t _cordl_ID;

  constexpr bool& __get_DidCancel();

  constexpr bool const& __get_DidCancel() const;

  constexpr void __set_DidCancel(bool value);

  constexpr uint64_t& __get__cordl_ID();

  constexpr uint64_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(uint64_t value);

  static inline ::Oculus::Platform::Models::UserReportID* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2709434, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "UserReportID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserReportID(UserReportID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserReportID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserReportID(UserReportID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserReportID();

public:
  /// @brief Field DidCancel, offset: 0x10, size: 0x1, def value: None
  bool ___DidCancel;

  /// @brief Field ID, offset: 0x18, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserReportID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserReportID, ___DidCancel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserReportID, ____cordl_ID) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserReportID);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserReportID*, "Oculus.Platform.Models", "UserReportID");
