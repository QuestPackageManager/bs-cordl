#pragma once
// IWYU pragma private; include "System/IPv6AddressHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPv6AddressHelper)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace System {
class IPv6AddressHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::IPv6AddressHelper);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.IPv6AddressHelper
class CORDL_TYPE IPv6AddressHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindCompressionRange, addr 0x4407bbc, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<int32_t, int32_t> FindCompressionRange(::System::ReadOnlySpan_1<uint16_t> numbers);

  /// @brief Method InternalIsValid, addr 0x4408bd0, size 0x2c4, virtual false, abstract: false, final false
  static inline bool InternalIsValid(::cordl_internals::Ptr<char16_t> name, int32_t start, ::ByRef<int32_t> end, bool validateStrictAddress);

  /// @brief Method IsLoopback, addr 0x4408af0, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsLoopback(::System::ReadOnlySpan_1<uint16_t> numbers);

  /// @brief Method IsValid, addr 0x4408e94, size 0x8, virtual false, abstract: false, final false
  static inline bool IsValid(::cordl_internals::Ptr<char16_t> name, int32_t start, ::ByRef<int32_t> end);

  /// @brief Method IsValidStrict, addr 0x4407d6c, size 0x330, virtual false, abstract: false, final false
  static inline bool IsValidStrict(::cordl_internals::Ptr<char16_t> name, int32_t start, ::ByRef<int32_t> end);

  /// @brief Method Parse, addr 0x440809c, size 0x4a8, virtual false, abstract: false, final false
  static inline void Parse(::System::ReadOnlySpan_1<char16_t> address, ::cordl_internals::Ptr<uint16_t> numbers, int32_t start, ::ByRef<::StringW> scopeId);

  /// @brief Method ParseCanonicalName, addr 0x4408544, size 0x5ac, virtual false, abstract: false, final false
  static inline ::StringW ParseCanonicalName(::StringW str, int32_t start, ::ByRef<bool> isLoopback, ::ByRef<::StringW> scopeId);

  /// @brief Method ShouldHaveIpv4Embedded, addr 0x4407c9c, size 0xd0, virtual false, abstract: false, final false
  static inline bool ShouldHaveIpv4Embedded(::System::ReadOnlySpan_1<uint16_t> numbers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPv6AddressHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPv6AddressHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPv6AddressHelper(IPv6AddressHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPv6AddressHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPv6AddressHelper(IPv6AddressHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9182 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IPv6AddressHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IPv6AddressHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IPv6AddressHelper*, "System", "IPv6AddressHelper");
