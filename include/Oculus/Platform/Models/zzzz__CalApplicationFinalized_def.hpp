#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CalApplicationFinalized)
// Forward declare root types
namespace Oculus::Platform::Models {
class CalApplicationFinalized;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CalApplicationFinalized);
// Type: Oculus.Platform.Models::CalApplicationFinalized
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13463))
// CS Name: ::Oculus.Platform.Models::CalApplicationFinalized*
class CORDL_TYPE CalApplicationFinalized : public ::System::Object {
public:
  // Declarations
  /// @brief Field CountdownMS, offset 0x10, size 0x4
  __declspec(property(get = __get_CountdownMS, put = __set_CountdownMS)) int32_t CountdownMS;

  /// @brief Field ID, offset 0x18, size 0x8
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field LaunchDetails, offset 0x20, size 0x8
  __declspec(property(get = __get_LaunchDetails, put = __set_LaunchDetails))::StringW LaunchDetails;

  constexpr int32_t& __get_CountdownMS();

  constexpr int32_t const& __get_CountdownMS() const;

  constexpr void __set_CountdownMS(int32_t value);

  constexpr uint64_t& __get__cordl_ID();

  constexpr uint64_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(uint64_t value);

  constexpr ::StringW& __get_LaunchDetails();

  constexpr ::StringW const& __get_LaunchDetails() const;

  constexpr void __set_LaunchDetails(::StringW value);

  static inline ::Oculus::Platform::Models::CalApplicationFinalized* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b1cbc size 0x98 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "CalApplicationFinalized", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CalApplicationFinalized(CalApplicationFinalized&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CalApplicationFinalized", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CalApplicationFinalized(CalApplicationFinalized const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CalApplicationFinalized();

public:
  /// @brief Field CountdownMS, offset: 0x10, size: 0x4, def value: None
  int32_t ___CountdownMS;

  /// @brief Field ID, offset: 0x18, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field LaunchDetails, offset: 0x20, size: 0x8, def value: None
  ::StringW ___LaunchDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CalApplicationFinalized, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CalApplicationFinalized, ___CountdownMS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CalApplicationFinalized, ____cordl_ID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CalApplicationFinalized, ___LaunchDetails) == 0x20, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CalApplicationFinalized);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CalApplicationFinalized*, "Oculus.Platform.Models", "CalApplicationFinalized");
