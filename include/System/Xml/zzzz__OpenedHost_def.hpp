#pragma once
// IWYU pragma private; include "System/Xml/OpenedHost.hpp"
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
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.OpenedHost
class CORDL_TYPE OpenedHost : public ::System::Object {
public:
  // Declarations
  /// @brief Field nonCachedConnectionsCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_nonCachedConnectionsCount, put = __cordl_internal_set_nonCachedConnectionsCount)) int32_t nonCachedConnectionsCount;

  static inline ::System::Xml::OpenedHost* New_ctor();

  constexpr int32_t const& __cordl_internal_get_nonCachedConnectionsCount() const;

  constexpr int32_t& __cordl_internal_get_nonCachedConnectionsCount();

  constexpr void __cordl_internal_set_nonCachedConnectionsCount(int32_t value);

  /// @brief Method .ctor, addr 0x60c55d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenedHost();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenedHost", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenedHost(OpenedHost&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenedHost", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenedHost(OpenedHost const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9413 };

  /// @brief Field nonCachedConnectionsCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___nonCachedConnectionsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::OpenedHost, ___nonCachedConnectionsCount) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::OpenedHost, 0x18>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::OpenedHost);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::OpenedHost*, "System.Xml", "OpenedHost");
