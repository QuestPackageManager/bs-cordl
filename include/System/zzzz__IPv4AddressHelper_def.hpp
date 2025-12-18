#pragma once
// IWYU pragma private; include "System/IPv4AddressHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPv4AddressHelper)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class IPv4AddressHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::IPv4AddressHelper);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.IPv4AddressHelper
class CORDL_TYPE IPv4AddressHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x5e2fc1c, size 0x30, virtual false, abstract: false, final false
  static inline bool IsValid(char16_t* name, int32_t start, ::ByRef<int32_t> end, bool allowIPv6, bool notImplicitFile, bool unknownScheme);

  /// @brief Method IsValidCanonical, addr 0x5e2fc4c, size 0x168, virtual false, abstract: false, final false
  static inline bool IsValidCanonical(char16_t* name, int32_t start, ::ByRef<int32_t> end, bool allowIPv6, bool notImplicitFile);

  /// @brief Method Parse, addr 0x5e302c8, size 0x54, virtual false, abstract: false, final false
  static inline bool Parse(::StringW name, uint8_t* numbers, int32_t start, int32_t end);

  /// @brief Method ParseCanonical, addr 0x5e2fb8c, size 0x90, virtual false, abstract: false, final false
  static inline bool ParseCanonical(::System::ReadOnlySpan_1<char16_t> name, uint8_t* numbers, int32_t start, int32_t end);

  /// @brief Method ParseCanonicalName, addr 0x5e30078, size 0x250, virtual false, abstract: false, final false
  static inline ::StringW ParseCanonicalName(::StringW str, int32_t start, int32_t end, ::ByRef<bool> isLoopback);

  /// @brief Method ParseHostNumber, addr 0x5e2fb5c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t ParseHostNumber(::System::ReadOnlySpan_1<char16_t> str, int32_t start, int32_t end);

  /// @brief Method ParseNonCanonical, addr 0x5e2fdb4, size 0x2c4, virtual false, abstract: false, final false
  static inline int64_t ParseNonCanonical(char16_t* name, int32_t start, ::ByRef<int32_t> end, bool notImplicitFile);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPv4AddressHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPv4AddressHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPv4AddressHelper(IPv4AddressHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPv4AddressHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPv4AddressHelper(IPv4AddressHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11029 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IPv4AddressHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IPv4AddressHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IPv4AddressHelper*, "System", "IPv4AddressHelper");
