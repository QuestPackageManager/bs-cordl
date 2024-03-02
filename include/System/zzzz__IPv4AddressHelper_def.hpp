#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: System::IPv4AddressHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::IPv4AddressHelper*
class CORDL_TYPE IPv4AddressHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x2914bbc, size 0x30, virtual false, abstract: false, final false
  static inline bool IsValid(::cordl_internals::Ptr<char16_t> name, int32_t start, ByRef<int32_t> end, bool allowIPv6, bool notImplicitFile, bool unknownScheme);

  /// @brief Method IsValidCanonical, addr 0x2914bec, size 0x140, virtual false, abstract: false, final false
  static inline bool IsValidCanonical(::cordl_internals::Ptr<char16_t> name, int32_t start, ByRef<int32_t> end, bool allowIPv6, bool notImplicitFile);

  /// @brief Method Parse, addr 0x2915248, size 0x106c, virtual false, abstract: false, final false
  static inline bool Parse(::StringW name, ::cordl_internals::Ptr<uint8_t> numbers, int32_t start, int32_t end);

  /// @brief Method ParseCanonical, addr 0x2914b30, size 0x8c, virtual false, abstract: false, final false
  static inline bool ParseCanonical(::System::ReadOnlySpan_1<char16_t> name, ::cordl_internals::Ptr<uint8_t> numbers, int32_t start, int32_t end);

  /// @brief Method ParseCanonicalName, addr 0x2915020, size 0x228, virtual false, abstract: false, final false
  static inline ::StringW ParseCanonicalName(::StringW str, int32_t start, int32_t end, ByRef<bool> isLoopback);

  /// @brief Method ParseHostNumber, addr 0x2914b00, size 0x30, virtual false, abstract: false, final false
  static inline int32_t ParseHostNumber(::System::ReadOnlySpan_1<char16_t> str, int32_t start, int32_t end);

  /// @brief Method ParseNonCanonical, addr 0x2914d2c, size 0x2f4, virtual false, abstract: false, final false
  static inline int64_t ParseNonCanonical(::cordl_internals::Ptr<char16_t> name, int32_t start, ByRef<int32_t> end, bool notImplicitFile);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IPv4AddressHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IPv4AddressHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IPv4AddressHelper*, "System", "IPv4AddressHelper");
