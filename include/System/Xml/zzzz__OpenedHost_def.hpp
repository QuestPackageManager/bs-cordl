#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenedHost)
// Forward declare root types
namespace System::Xml {
class OpenedHost;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::OpenedHost);
// Type: System.Xml::OpenedHost
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11552))
// CS Name: ::System.Xml::OpenedHost*
class CORDL_TYPE OpenedHost : public ::System::Object {
public:
  // Declarations
  /// @brief Field nonCachedConnectionsCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_nonCachedConnectionsCount, put = __cordl_internal_set_nonCachedConnectionsCount)) int32_t nonCachedConnectionsCount;

  constexpr int32_t& __cordl_internal_get_nonCachedConnectionsCount();

  constexpr int32_t const& __cordl_internal_get_nonCachedConnectionsCount() const;

  constexpr void __cordl_internal_set_nonCachedConnectionsCount(int32_t value);

  static inline ::System::Xml::OpenedHost* New_ctor();

  /// @brief Method .ctor, addr 0x28a4244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenedHost", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenedHost(OpenedHost&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenedHost", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenedHost(OpenedHost const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenedHost();

public:
  /// @brief Field nonCachedConnectionsCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___nonCachedConnectionsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::OpenedHost, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::OpenedHost, ___nonCachedConnectionsCount) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::OpenedHost);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::OpenedHost*, "System.Xml", "OpenedHost");
